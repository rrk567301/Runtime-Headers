@class NSString;

@interface WDBrowsingContext : NSObject <NSCopying> {
    NSString *_frameHandle;
}

@property (readonly, copy, nonatomic) NSString *windowHandle;
@property (readonly, copy, nonatomic) NSString *frameHandle;
@property (readonly, nonatomic, getter=isToplevel) BOOL toplevel;

+ (id)browsingContextWithWindowHandle:(id)a0 frameHandle:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithWindowHandle:(id)a0 frameHandle:(id)a1;
- (BOOL)isEqualToBrowsingContext:(id)a0;

@end
