@class NSData, ISDDataWrapper;

@interface ISDDataReference : NSData {
    ISDDataWrapper *_dataWrapper;
    NSData *_data;
}

+ (id)dataReferenceWithData:(id)a0;
+ (id)dataReferenceWithDataWrapper:(id)a0;
+ (void)setCopyDataReferencesAsData:(BOOL)a0;

- (id)_data;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dataWrapper;
- (unsigned long long)length;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (BOOL)dataFaultFailure;
- (id)initWithDataWrapper:(id)a0;
- (BOOL)isd_isAttributeSelfConsistent;
- (BOOL)isd_isEqual:(id)a0;

@end
