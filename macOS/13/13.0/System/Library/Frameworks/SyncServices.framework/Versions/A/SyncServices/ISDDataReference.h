@class NSData, ISDDataWrapper;

@interface ISDDataReference : NSData {
    ISDDataWrapper *_dataWrapper;
    NSData *_data;
}

+ (id)dataReferenceWithData:(id)a0;
+ (id)dataReferenceWithDataWrapper:(id)a0;
+ (void)setCopyDataReferencesAsData:(BOOL)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (const void *)bytes;
- (id)_data;
- (id)dataWrapper;
- (BOOL)isd_isEqual:(id)a0;
- (BOOL)isd_isAttributeSelfConsistent;
- (BOOL)dataFaultFailure;
- (id)initWithDataWrapper:(id)a0;

@end
