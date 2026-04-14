@class NSString, NSNumber;

@interface MTRDataTypeICECandidateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *sdpMid;
@property (copy, nonatomic) NSNumber *sdpmLineIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
