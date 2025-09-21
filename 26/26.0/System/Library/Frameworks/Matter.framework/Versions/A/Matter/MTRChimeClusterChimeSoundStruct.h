@class NSNumber, NSString;

@interface MTRChimeClusterChimeSoundStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *chimeID;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
