@interface SATimeVal : NSObject

@property struct timeval { long long tv_sec; int tv_usec; } timeVal;

- (struct timeval { long long x0; int x1; } *)getTimeValAddr;

@end
