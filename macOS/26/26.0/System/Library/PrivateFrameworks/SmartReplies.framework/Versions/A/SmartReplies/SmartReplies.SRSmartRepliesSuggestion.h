@class NSString;

@interface SmartReplies.SRSmartRepliesSuggestion : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ title;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) BOOL isDynamicSuggestion;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;

@end
