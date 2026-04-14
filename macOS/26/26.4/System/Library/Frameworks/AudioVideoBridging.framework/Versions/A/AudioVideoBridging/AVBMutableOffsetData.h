@class NSMutableData;

@interface AVBMutableOffsetData : NSMutableData

@property (retain) NSMutableData *wrappedData;
@property unsigned long long offset;

- (void)setLength:(unsigned long long)a0;
- (BOOL)isEqualToData:(id)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void *)mutableBytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setData:(id)a0;
- (void)appendData:(id)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)increaseLengthBy:(unsigned long long)a0;
- (unsigned long long)length;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1 length:(unsigned long long)a2;
- (id)initWithWrappedData:(id)a0 offset:(unsigned long long)a1;

@end
