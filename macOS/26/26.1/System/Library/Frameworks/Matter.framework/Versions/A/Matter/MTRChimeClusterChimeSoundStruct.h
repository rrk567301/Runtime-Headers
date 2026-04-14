@class NSNumber, NSString;

@interface MTRChimeClusterChimeSoundStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *chimeID;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
