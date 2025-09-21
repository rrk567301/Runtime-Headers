@class NSString, NSNumber;

@interface MTRDataTypeICECandidateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *sdpMid;
@property (copy, nonatomic) NSNumber *sdpmLineIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
