@class NSString;

@interface WDBrowsingContext : NSObject <NSCopying> {
    NSString *_frameHandle;
}

@property (readonly, copy, nonatomic) NSString *windowHandle;
@property (readonly, copy, nonatomic) NSString *frameHandle;
@property (readonly, nonatomic, getter=isToplevel) char toplevel;

+ (id)browsingContextWithWindowHandle:(id)a0 frameHandle:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindowHandle:(id)a0 frameHandle:(id)a1;
- (char)isEqualToBrowsingContext:(id)a0;

@end
