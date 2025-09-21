@class NSString;

@interface SmartReplies.SRSmartRepliesSuggestion : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDynamicSuggestion;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(char)a1;

@end
