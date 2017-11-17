
/* MDP start frame */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA0_SOF, 0)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA1_SOF, 1)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_DSI0_TE_SOF, 2)	/* DISPSYS TE event */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_DSI1_TE_SOF, 3)	/* DISPSYS TE event */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_MVW_SOF, 4)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP0_SOF, 5)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP1_SOF, 6)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WDMA_SOF, 7)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT0_SOF, 8)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT1_SOF, 9)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_CROP_SOF, 10)

/* Display start frame */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL0_SOF, 11)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL1_SOF, 12)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_SOF, 13)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA1_SOF, 14)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA2_SOF, 15)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA0_SOF, 16)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA1_SOF, 17)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR0_SOF, 18)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR1_SOF, 19)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_AAL_SOF, 20)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_GAMMA_SOF, 21)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_UFOE_SOF, 22)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_PWM0_SOF, 23)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_PWM1_SOF, 24)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OD_SOF, 25)

/* MDP frame done */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA0_EOF, 26)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA1_EOF, 27)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ0_EOF, 28)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ1_EOF, 29)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ2_EOF, 30)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP0_EOF, 31)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP1_EOF, 32)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WDMA_EOF, 33)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT0_W_EOF, 34)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT0_R_EOF, 35)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT1_W_EOF, 36)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT1_R_EOF, 37)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_CROP_EOF, 38)

/* Display frame done */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL0_EOF, 39)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL1_EOF, 40)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_EOF, 41)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA1_EOF, 42)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA2_EOF, 43)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA0_EOF, 44)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA1_EOF, 45)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR0_EOF, 46)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR1_EOF, 47)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_AAL_EOF, 48)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_GAMMA_EOF, 49)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_UFOE_EOF, 50)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_DPI0_EOF, 51)

/* Mutex frame done */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX0_STREAM_EOF, 52)	/* DISPSYS */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX1_STREAM_EOF, 53)	/* DISPSYS */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX2_STREAM_EOF, 54)	/* DISPSYS */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX3_STREAM_EOF, 55)	/* DISPSYS */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX4_STREAM_EOF, 56)	/* DISPSYS, please refer to disp_hal.h */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX5_STREAM_EOF, 57)	/* DpFramework */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX6_STREAM_EOF, 58)	/* DpFramework */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX7_STREAM_EOF, 59)	/* DpFramework */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX8_STREAM_EOF, 60)	/* DpFramework */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX9_STREAM_EOF, 61)

    /* Display underrun */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_UNDERRUN, 62)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA1_UNDERRUN, 63)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA2_UNDERRUN, 64)

/* ISP frame done */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS2_2_EOF, 129)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS2_1_EOF, 130)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS2_0_EOF, 131)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS1_1_EOF, 132)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS1_0_EOF, 133)

/* Engine events */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_CAMSV_2_PASS1_DONE, 134)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_CAMSV_1_PASS1_DONE, 135)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_SENINF_CAM1_2_3_FULL, 136)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_SENINF_CAM0_FULL, 137)

/* JPEG frame done */
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_JPEG_ENC_PASS2_EOF, 257)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_JPEG_ENC_PASS1_EOF, 258)
    DECLARE_CMDQ_EVENT(CMDQ_EVENT_JPEG_DEC_EOF, 259)

/* Keep this at the end of HW events */
    DECLARE_CMDQ_EVENT(CMDQ_MAX_HW_EVENT_COUNT, 260)

/* SW Sync Tokens (Pre-defined) */
    /* Config thread notify trigger thread */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_CONFIG_DIRTY, 261)
    /* Trigger thread notify config thread */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_STREAM_EOF, 262)
    /* Block Trigger thread until the ESD check finishes. */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_ESD_EOF, 263)
    /* check CABC setup finish */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_CABC_EOF, 264)
    /* Block Trigger thread until the path freeze finishes */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_FREEZE_EOF, 265)
    /* Pass-2 notifies VENC frame is ready to be encoded */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_VENC_INPUT_READY, 270)
    /* VENC notifies Pass-2 encode done so next frame may start */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_VENC_EOF, 271)

	/* Notify normal CMDQ there are some secure task done */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_SECURE_THR_EOF, 299)

/* SW Sync Tokens (User-defined) */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_USER_0, 300)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_USER_1, 301)

/* GPR access tokens (for HW register backup) */
/* There are 15 32-bit GPR, 3 GPR form a set (64-bit for address, 32-bit for value) */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_0, 400)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_1, 401)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_2, 402)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_3, 403)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_4, 404)

    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_MAX, (0x1FF))	/* event id is 9 bit */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_INVALID, (-1))