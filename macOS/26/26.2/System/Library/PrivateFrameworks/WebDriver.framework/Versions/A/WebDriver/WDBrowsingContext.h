@class NSString;

@interface WDBrowsingContext : NSObject <NSCopying> {
    NSString *_frameHandle;
}

@property (readonly, copy, nonatomic) NSString *windowHandle;
@property (readonly, copy, nonatomic) NSString *frameHandle;
@property (readonly, nonatomic, getter=isToplevel) BOOL toplevel;

+ (id)browsingContextWithWindowHandle:(id)a0 frameHandle:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWindowHandle:(id)a0 frameHandle:(id)a1;
- (BOOL)isEqualToBrowsingContext:(id)a0;

@end
