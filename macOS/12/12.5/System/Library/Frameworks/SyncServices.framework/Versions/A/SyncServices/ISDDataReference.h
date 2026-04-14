@class NSData, ISDDataWrapper;

@interface ISDDataReference : NSData {
    ISDDataWrapper *_dataWrapper;
    NSData *_data;
}

+ (id)dataReferenceWithDataWrapper:(id)a0;
+ (id)dataReferenceWithData:(id)a0;
+ (void)setCopyDataReferencesAsData:(BOOL)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)length;
- (const void *)bytes;
- (id)_data;
- (id)dataWrapper;
- (BOOL)isd_isAttributeSelfConsistent;
- (BOOL)isd_isEqual:(id)a0;
- (id)initWithDataWrapper:(id)a0;
- (BOOL)dataFaultFailure;

@end
