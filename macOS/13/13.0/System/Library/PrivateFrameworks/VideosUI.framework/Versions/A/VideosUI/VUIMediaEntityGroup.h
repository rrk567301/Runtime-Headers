@class NSArray, NSObject;
@protocol NSCopying;

@interface VUIMediaEntityGroup : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
