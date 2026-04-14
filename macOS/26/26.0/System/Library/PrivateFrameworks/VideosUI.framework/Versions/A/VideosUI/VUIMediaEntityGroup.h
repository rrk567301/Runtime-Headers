@class NSArray, NSObject;
@protocol NSCopying;

@interface VUIMediaEntityGroup : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
