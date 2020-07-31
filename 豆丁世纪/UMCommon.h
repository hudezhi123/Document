//
//  UMCommon.h
//  TickVideo
//
//  Created by heyong on 2019/2/20.
//  Copyright © 2019 Docin. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kUMPageNameLogin                @"登录页面"
#define kUMPageNameQuickLogin           @"快捷登录页面"
#define kUMPageNameRegister             @"注册页面"
#define kUMPageNameResetPwd             @"重置密码页面"
#define kUMPageNameAgreement            @"用户服务协议页面"
#define kUMPageNamePrivacyPolicy        @"隐私政策页面"
#define kUMPageNameBindPhone            @"第三方登录绑定手机号页面"
#define kUMPageNameVerifyMsgCode        @"输入短信验证码页面"
#define kUMPageNameVerifyImage          @"输入图片验证码页面"

#define kUMPageNameRecord               @"录制页面"
#define kUMPageNameVideoEdit            @"视频编辑页面"
#define kUMPageNameImageEdit            @"图片编辑页面"
#define kUMPageNameStoryDetail          @"作品预览页面"
#define kUMPageNameStoryPlay            @"作品播放页面"
#define kUMPageNameStoryRate            @"作品评价页面"
#define kUMPageNameAccountSecurity      @"账号与安全页面"
#define kUMPageNameBindPhoneNumber      @"手机号绑定页面"
#define kUMPageNameBindThirdAccount     @"第三方账号绑定页面"
#define kUMPageNameModifyPwd            @"修改密码页面"

#define kUMPageNameStoryHome            @"首页页面"
#define kUMPageNameClipList             @"片段列表页面"
#define kUMPageNamePublish              @"发布页面"
#define kUMPageNameChooseCover          @"选择封面页面"
#define kUMPageNameMyProfile            @"我的主页页面"
#define kUMPageNameUserProfile          @"用户主页页面"
#define kUMPageNameEditMyProfile        @"修改个人资料页面"
#define kUMPageNameSetting              @"设置页面"
#define kUMPageNamePrivacySetting       @"隐私设置页面"
#define kUMPageNameBlacklist            @"黑名单页面"
#define kUMPageNamePlaySetting          @"播放设置页面"
#define kUMPageNamePlayQualitySetting   @"设置播放清晰度页面"
#define kUMPageNameAboutAyou            @"关于AYOU页面"

#define kUMRegisterClickEvent                       @"register_click"       // 注册点击
#define kUMRegisterSuccessEvent                     @"register_success"     // 注册成功

#define kUMStoryDetailViewPlayClickEvent            @"story_detail_view_play_click"                 // 故事预览页-进入播放页点击
#define kUMStoryDetailViewShareButtonClickEvent     @"story_detail_view_share_button_click"         // 故事预览页-分享按钮点击
#define kUMStoryDetailViewShareQQClickEvent         @"story_detail_view_share_qq_click"             // 故事预览页-分享qq点击
#define kUMStoryDetailViewShareQzoneClickEvent      @"story_detail_view_share_qzone_click"          // 故事预览页-分享qq空间点击
#define kUMStoryDetailViewShareSinaClickEvent       @"story_detail_view_share_sina_click"           // 故事预览页-分享微博点击
#define kUMStoryDetailViewShareWxSessionClickEvent  @"story_detail_view_share_wx_session_click"     // 故事预览页-分享微信好友点击
#define kUMStoryDetailViewShareWxTimelineClickEvent @"story_detail_view_share_wx_timeline_click"    // 故事预览页-分享微信朋友圈点击

#define kUMStoryPlayViewRateClickEvent              @"story_play_view_rate_click"                // 故事播放页-评价按钮点击（已评价后再次点击不统计）
#define kUMStoryPlayViewCollectClickEvent           @"story_play_view_collect_click"             // 故事播放页-收藏按钮点击（点击取消收藏不统计）
#define kUMStoryPlayViewShareButtonClickEvent       @"story_play_view_share_button_click"        // 故事播放页-分享按钮点击
#define kUMStoryPlayViewShareQQClickEvent           @"story_play_view_share_qq_click"            // 故事播放页-分享qq点击
#define kUMStoryPlayViewShareQzoneClickEvent        @"story_play_view_share_qzone_click"         // 故事播放页-分享qq空间点击
#define kUMStoryPlayViewShareSinaClickEvent         @"story_play_view_share_sina_click"          // 故事播放页-分享微博点击
#define kUMStoryPlayViewShareWxSessionClickEvent    @"story_play_view_share_wx_session_click"    // 故事播放页-分享微信好友点击
#define kUMStoryPlayViewShareWxTimelineClickEvent   @"story_play_view_share_wx_timeline_click"   // 故事播放页-分享微信朋友圈点击

#define kUMTabBarRecordClickEvent                   @"tab_bar_record_click"              // 底部标签栏-录制按钮点击

#define kUMCameraViewRecordClickEvent               @"camera_view_record_click"          // 录制页面-录制模式下的拍摄按钮点击
#define kUMCameraViewDelayRecordClickEvent          @"camera_view_delay_record_click"    // 录制页面-倒计时模式下的拍摄按钮点击
#define kUMCameraViewTakePhotoClickEvent            @"camera_view_take_photo_click"      // 录制页面-拍照模式下的拍摄按钮点击
#define kUMCameraViewPhotoAlbumClickEvent           @"camera_view_photo_album_click"     // 录制页面-选择相册按钮点击

#define kUMVideoEditViewTrimClickEvent              @"video_edit_view_trim_click"        // 视频编辑页-剪辑按钮点击（页面初次加载默认是选中剪辑按钮也要统计，重复点击当前已选中的按钮不统计）
#define kUMVideoEditViewSpeedClickEvent             @"video_edit_view_speed_click"       // 视频编辑页-速度按钮点击（重复点击当前已选中的按钮不统计）
#define kUMVideoEditViewCropClickEvent              @"video_edit_view_crop_click"        // 视频编辑页-裁剪按钮点击（重复点击当前已选中的按钮不统计）

#define kUMVideoEditViewApplyTrimClickEvent         @"video_edit_view_apply_trim_click"  // 视频编辑页-剪辑后应用按钮点击
#define kUMVideoEditViewApplySpeedClickEvent        @"video_edit_view_apply_speed_click" // 视频编辑页-调整速度后应用按钮点击
#define kUMVideoEditViewApplyCropClickEvent         @"video_edit_view_apply_crop_click"  // 视频编辑页-裁剪后应用按钮点击

#define kUMClipListViewDraftClickEvent              @"clip_list_view_draft_click"        // 片段列表页面-草稿按钮点击
#define kUMClipListViewImageDeleteClickEvent        @"clip_list_view_image_delete_click" // 片段列表页面-图片片段-删除按钮点击
#define kUMClipListViewImageTextClickEvent          @"clip_list_view_image_text_click"   // 片段列表页面-图片片段-文本按钮点击
#define kUMClipListViewImageEditClickEvent          @"clip_list_view_image_edit_click"   // 片段列表页面-图片片段-编辑按钮点击
#define kUMClipListViewImageSaveClickEvent          @"clip_list_view_image_save_click"   // 片段列表页面-图片片段-保存按钮点击
#define kUMClipListViewVideoDeleteClickEvent        @"clip_list_view_video_delete_click" // 片段列表页面-视频片段-删除按钮点击
#define kUMClipListViewVideoTextClickEvent          @"clip_list_view_video_text_click"   // 片段列表页面-视频片段-文本按钮点击
#define kUMClipListViewVideoEditClickEvent          @"clip_list_view_video_edit_click"   // 片段列表页面-视频片段-编辑按钮点击
#define kUMClipListViewVideoSaveClickEvent          @"clip_list_view_video_save_click"   // 片段列表页面-视频片段-保存按钮点击

#define kUMMyProfileViewNoStoryClickEvent           @"my_profile_view_no_story_click"           // 我的主页-无作品时创建作品按钮点击
#define kUMMyProfileViewNoDraftClickEvent           @"my_profile_view_no_draft_click"           // 我的主页-无草稿时创建作品按钮点击
#define kUMMyProfileViewNoFansClickEvent            @"my_profile_view_no_fans_click"            // 我的主页-无粉丝时创建作品按钮点击
#define kUMMyProfileViewShareButtonClickEvent       @"my_profile_view_share_button_click"       // 我的主页-分享按钮点击
#define kUMMyProfileViewShareQQClickEvent           @"my_profile_view_share_qq_click"           // 我的主页-分享qq点击
#define kUMMyProfileViewShareQzoneClickEvent        @"my_profile_view_share_qzone_click"        // 我的主页-分享qq空间点击
#define kUMMyProfileViewShareSinaClickEvent         @"my_profile_view_share_sina_click"         // 我的主页-分享微博点击
#define kUMMyProfileViewShareWxSessionClickEvent    @"my_profile_view_share_wx_session_click"   // 我的主页-分享微信好友点击
#define kUMMyProfileViewShareWxTimelineClickEvent   @"my_profile_view_share_wx_timeline_click"  // 我的主页-分享微信朋友圈点击
