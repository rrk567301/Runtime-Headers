@class NSNumber, CCItemMessage;
@protocol CCItemContent;

@interface CCSharedItem : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_sharedIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *sharedIdentifier;
@property (readonly, nonatomic) CCItemMessage<CCItemContent> *content;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContent:(id)a0 error:(id *)a1;
- (id)initWithSharedIdentifier:(id)a0 content:(id)a1;
- (BOOL)isEqualToSharedItem:(id)a0;

@end
