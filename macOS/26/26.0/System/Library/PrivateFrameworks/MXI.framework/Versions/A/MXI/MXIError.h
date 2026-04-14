@interface MXIError : NSError

+ (long long)code;
+ (id)suggestion;
+ (id)errorWithDescription:(id)a0;
+ (id)errorWithFormattedDescription:(id)a0;
+ (void)fillError:(id *)a0 withDescription:(id)a1;
+ (void)fillError:(id *)a0 withFormattedDescription:(id)a1;
+ (id)prependMessage;

@end
