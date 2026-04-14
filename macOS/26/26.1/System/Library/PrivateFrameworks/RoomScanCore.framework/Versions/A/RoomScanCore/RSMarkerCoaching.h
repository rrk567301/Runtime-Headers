@interface RSMarkerCoaching : NSObject {
    struct MarkerProposal { void /* function */ **_vptr$MarkerProposal; float _extend_length; float _angle_thres_for_major_wall; float _parallel_angle_thres; float _corner_dist_thres; struct Structure_complete { struct vector<marker_proposal::Structure_completeOutput, std::allocator<marker_proposal::Structure_completeOutput>> { struct Structure_completeOutput *__begin_; struct Structure_completeOutput *__end_; struct Structure_completeOutput *__cap_; } small_gaps; struct vector<marker_proposal::Structure_completeOutput, std::allocator<marker_proposal::Structure_completeOutput>> { struct Structure_completeOutput *__begin_; struct Structure_completeOutput *__end_; struct Structure_completeOutput *__cap_; } small_gaps_result; float _connection_angle_thresh; float _gap_length_thresh; float _gap_size_thresh; float _iou_thresh; float _line_occupancy_thresh; float _angle_thres_with_view_line; float _neighbor_line_threshold; int _frame_in_consider; int _line_id1; int _line_id2; } _alg_structure_complete; struct vector<marker_proposal::ProposalWrapper, std::allocator<marker_proposal::ProposalWrapper>> { struct ProposalWrapper *__begin_; struct ProposalWrapper *__end_; struct ProposalWrapper *__cap_; } _pool; struct vector<std::vector<float __attribute__((ext_vector_type(3)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(3)))>>> { void *__begin_; void *__end_; void *__cap_; } _all_major_convex_hulls; } _generator;
    struct vector<roomscancore::Line<float __attribute__((ext_vector_type(2)))>, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>> { void *__begin_; void *__end_; void *__cap_; } _all_major_view_lines;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _all_poses;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
