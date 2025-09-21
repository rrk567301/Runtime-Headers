@class NSArray;

@interface _NSTextFormattingViewControllerComponentGroup : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* function */ components;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *components;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponentKeys:(id)a0;
- (id)initWithComponents:(id)a0;

@end
