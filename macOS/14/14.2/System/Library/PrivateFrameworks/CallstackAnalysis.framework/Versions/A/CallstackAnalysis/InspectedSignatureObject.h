@class NSString, TPCSignatureObject;

@interface InspectedSignatureObject : NSObject

@property (retain, nonatomic) TPCSignatureObject *obj;
@property (nonatomic) unsigned long long total_1P_to_3P_boundary_matches;
@property (nonatomic) unsigned long long total_last_contiguous_1P_to_3P_boundary_matches;
@property (nonatomic) unsigned long long total_3P_frame_matches;
@property (nonatomic) unsigned long long total_last_contiguous_3P_frame_matches;
@property (nonatomic) BOOL lowest_3P_frame_seen;
@property (nonatomic) BOOL has_trigger_frame;
@property (nonatomic) unsigned long long log_number;
@property (nonatomic) long long matchStartOffsetFromLast3PFrame;
@property (copy, nonatomic) NSString *last3PFrame;

- (id)init;
- (void).cxx_destruct;

@end
