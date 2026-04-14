@class NSString, NSMutableArray;

@interface SCROutputSequentialStep : NSObject <NSCopying, NSSecureCoding> {
    NSString *_category;
    NSMutableArray *_actions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requestWasSentSynchronously;

- (id)initWithAction:(id)a0;
- (id)shortDescription;
- (void)setActions:(id)a0;
- (void)setCategory:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)category;
- (void)addAction:(id)a0;
- (id)description;
- (id)actionAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actions;
- (id)init;
- (void)insertAction:(id)a0 atIndex:(unsigned long long)a1;
- (id)_initWithSequentialStep:(id)a0;
- (void)removeActionAtIndex:(unsigned long long)a0;
- (void)replaceActionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withActionsFromArray:(id)a1;

@end
