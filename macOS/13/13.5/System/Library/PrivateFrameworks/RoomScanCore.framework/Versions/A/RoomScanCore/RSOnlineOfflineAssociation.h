@interface RSOnlineOfflineAssociation : NSObject {
    struct RSOnlineOfflineAssociationCore { void /* function */ **_vptr$RSOnlineOfflineAssociationCore; struct ONLINE_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _offline_config; } _rsOnlineOfflineAssociationCore;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)deduplicateSurfaceUUIDInFloorPlan:(id)a0;
- (void)deduplicateUUIDInSurfaces:(id)a0 uuidSet:(id)a1;
- (id)runWithOnlineFloorplan:(id)a0 offlineFloorplan:(id)a1 camDensity2D:(id)a2 geoMetryMeta:(id)a3;
- (void)validateParentIdentifierOfWalls:(id)a0;

@end
