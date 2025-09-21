@interface VUIMediaEntityType : NSObject <NSCopying>

@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long mediaCategoryType;
@property (nonatomic) unsigned long long mediaCollectionType;
@property (nonatomic, getter=isRental) char rental;

+ (id)show;
+ (id)episode;
+ (id)movie;
+ (id)season;
+ (id)homeVideo;
+ (id)movieRental;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)stringDescription;
- (id)_initWithMediaCollectionType:(unsigned long long)a0 mediaCategoryType:(unsigned long long)a1;
- (id)_initWithMediaItemCategoryType:(unsigned long long)a0 isRental:(char)a1;

@end
