@class NSEnumerator;

@interface TRIPeekEnumerator : NSObject {
    NSEnumerator *_underlyingEnum;
    id _peek;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0;
- (id)peekNextObject;

@end
