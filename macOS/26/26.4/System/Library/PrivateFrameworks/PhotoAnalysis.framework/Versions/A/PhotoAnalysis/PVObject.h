@class NSString;

@interface PVObject : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalIdentifier:(id)a0;

@end
