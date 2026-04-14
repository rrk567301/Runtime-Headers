@class NSNumber, NSString;

@interface MTRChimeClusterChimeSoundStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *chimeID;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
