@interface _PASCompression : NSObject

+ (id)_compress:(id)a0 fast:(char)a1 lowMemory:(char)a2;
+ (id)compress:(id)a0 fast:(char)a1;
+ (id)compress:(id)a0 lowMemory:(char)a1;
+ (id)decompress:(id)a0;
+ (id)decompress:(id)a0 maxLength:(long long)a1;
+ (id)fastCompress:(id)a0;

@end
