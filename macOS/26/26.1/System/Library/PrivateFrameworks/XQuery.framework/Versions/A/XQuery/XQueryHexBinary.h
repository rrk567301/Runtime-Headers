@class NSString, NSData;

@interface XQueryHexBinary : NSObject <XQueryAtomicType> {
    NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)binaryWithData:(id)a0;
+ (id)binaryWithString:(id)a0;

- (id)stringValue;
- (id)initWithData:(id)a0;
- (void)finalize;
- (id)data;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;

@end
