@class NSEnumerator;

@interface TRIPeekEnumerator : NSObject {
    NSEnumerator *_underlyingEnum;
    id _peek;
}

- (id)initWithEnumerator:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;
- (id)peekNextObject;

@end
