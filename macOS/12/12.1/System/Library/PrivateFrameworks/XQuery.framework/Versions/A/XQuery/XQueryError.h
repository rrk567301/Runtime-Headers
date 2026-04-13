@class NSString;

@interface XQueryError : NSError {
    long long _err;
    long long _line;
    NSString *_msg;
}

+ (id)error:(long long)a0 withMsg:(id)a1 atLine:(long long)a2;
+ (id)error:(long long)a0 withMsg:(id)a1;

- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)localizedDescription;
- (id)initWithError:(long long)a0 msg:(id)a1 atLine:(long long)a2;

@end
