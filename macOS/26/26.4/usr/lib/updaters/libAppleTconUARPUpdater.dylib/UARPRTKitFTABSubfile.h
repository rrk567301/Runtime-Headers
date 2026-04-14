@class NSString, NSData, NSURL, NSObject;
@protocol OS_os_log;

@interface UARPRTKitFTABSubfile : NSObject {
    NSObject<OS_os_log> *_log;
    NSData *_data;
    NSURL *_url;
    unsigned long long _offset;
}

@property (readonly) NSString *subFileTag;
@property (readonly) unsigned long long subFileLength;
@property (readonly) unsigned long long subFileOffset;

- (void).cxx_destruct;
- (id)description;
- (id)getDataBlock:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)generateHash:(long long)a0;
- (id)getDataRangeFromData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getDataRangeFromURL:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithData:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 subFileTag:(id)a3;
- (id)initWithData:(id)a0 subFileTag:(id)a1;
- (id)initWithSubfileTag:(id)a0;
- (id)initWithURL:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 subFileTag:(id)a3;

@end
