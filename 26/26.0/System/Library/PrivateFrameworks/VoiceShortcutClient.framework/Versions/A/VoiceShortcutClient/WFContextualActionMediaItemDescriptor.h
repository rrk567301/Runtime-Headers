@class NSNumber, NSString;

@interface WFContextualActionMediaItemDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *playbackStoreId;
@property (readonly, copy, nonatomic) NSString *name;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlaybackStoreId:(id)a0 name:(id)a1;

@end
