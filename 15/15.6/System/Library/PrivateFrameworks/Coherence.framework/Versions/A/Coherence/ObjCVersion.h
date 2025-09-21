@class NSArray, NSString;

@interface ObjCVersion : NSObject {
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) char isEmpty;
@property (nonatomic, readonly) long long maxCounter;
@property (nonatomic, readonly) char hasTemporaryComponents;
@property (nonatomic, readonly) NSArray *sortedUUIDs;
@property (nonatomic, readonly) NSString *description;

- (id)copy;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)apply:(id)a0;
- (void)merge:(id)a0;
- (char)contains:(id)a0;
- (long long)compareTo:(id)a0;
- (void)subtract:(id)a0;
- (char)hasDeltaTo:(id)a0;
- (void)insertWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;
- (void)subtractWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;
- (id)temporaryComponentsWithExcluding:(id)a0;

@end
