@class NSMutableData;

@interface AVBMutableOffsetData : NSMutableData

@property (retain) NSMutableData *wrappedData;
@property unsigned long long offset;

- (void)appendData:(id)a0;
- (void)setLength:(unsigned long long)a0;
- (const void *)bytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (unsigned long long)length;
- (void *)mutableBytes;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (void)setData:(id)a0;
- (void)increaseLengthBy:(unsigned long long)a0;
- (BOOL)isEqualToData:(id)a0;
- (void).cxx_destruct;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1 length:(unsigned long long)a2;
- (id)initWithWrappedData:(id)a0 offset:(unsigned long long)a1;

@end
