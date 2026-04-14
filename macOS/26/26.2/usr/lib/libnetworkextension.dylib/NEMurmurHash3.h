@interface NEMurmurHash3 : NSObject

+ (unsigned int)hash:(id)a0 seed:(unsigned int)a1;
+ (unsigned int)hashWithString:(const char *)a0 seed:(unsigned int)a1;

@end
