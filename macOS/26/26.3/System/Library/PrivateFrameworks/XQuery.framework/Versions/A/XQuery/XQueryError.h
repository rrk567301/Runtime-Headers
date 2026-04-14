@class NSString;

@interface XQueryError : NSError {
    long long _err;
    long long _line;
    NSString *_msg;
}

+ (id)error:(long long)a0 withMsg:(id)a1;
+ (id)error:(long long)a0 withMsg:(id)a1 atLine:(long long)a2;

- (id)localizedDescription;
- (void)finalize;
- (id)description;
- (void)dealloc;
- (id)initWithError:(long long)a0 msg:(id)a1 atLine:(long long)a2;

@end
