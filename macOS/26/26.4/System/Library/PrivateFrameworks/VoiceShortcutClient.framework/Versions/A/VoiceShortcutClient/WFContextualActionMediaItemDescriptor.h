@class NSNumber, NSString;

@interface WFContextualActionMediaItemDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *playbackStoreId;
@property (readonly, copy, nonatomic) NSString *name;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaybackStoreId:(id)a0 name:(id)a1;

@end
