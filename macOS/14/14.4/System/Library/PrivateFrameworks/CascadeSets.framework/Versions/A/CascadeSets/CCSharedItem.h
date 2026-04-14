@class NSNumber, CCItemMessage;
@protocol CCItemContent;

@interface CCSharedItem : NSObject <NSCopying> {
    NSNumber *_sharedIdentifier;
}

@property (readonly, nonatomic) NSNumber *sharedIdentifier;
@property (readonly, nonatomic) CCItemMessage<CCItemContent> *content;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0;
- (id)initWithSharedIdentifier:(id)a0 content:(id)a1;
- (BOOL)isEqualToSharedItem:(id)a0;

@end
