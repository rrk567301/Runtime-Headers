@class NSString, NSDictionary;

@interface _NSTextFormattingViewControllerFormattingStyle : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* function */ styleKey;
    void /* function */ title;
    void /* function */ attributes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *styleKey;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *attributes;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyleKey:(id)a0 title:(id)a1 attributes:(id)a2;

@end
