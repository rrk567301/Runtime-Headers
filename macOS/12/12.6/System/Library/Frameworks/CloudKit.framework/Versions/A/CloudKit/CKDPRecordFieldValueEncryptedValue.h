@class NSString, CKDPLocationCoordinate, CKDPRecordReference, CKDPDate, NSMutableArray;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _doubleListValues;
    struct { long long *list; unsigned long long count; unsigned long long size; } _signedListValues;
    struct { unsigned char doubleValue : 1; unsigned char signedValue : 1; } _has;
}

@property (nonatomic) BOOL hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) CKDPDate *dateValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference *referenceValue;
@property (readonly, nonatomic) unsigned long long signedListValuesCount;
@property (readonly, nonatomic) long long *signedListValues;
@property (readonly, nonatomic) unsigned long long doubleListValuesCount;
@property (readonly, nonatomic) double *doubleListValues;
@property (retain, nonatomic) NSMutableArray *dateListValues;
@property (retain, nonatomic) NSMutableArray *stringListValues;
@property (retain, nonatomic) NSMutableArray *locationListValues;

+ (Class)dateListValueType;
+ (Class)stringListValueType;
+ (Class)locationListValueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addDateListValue:(id)a0;
- (void)addStringListValue:(id)a0;
- (void)addLocationListValue:(id)a0;
- (void)clearSignedListValues;
- (long long)signedListValueAtIndex:(unsigned long long)a0;
- (void)addSignedListValue:(long long)a0;
- (void)clearDoubleListValues;
- (double)doubleListValueAtIndex:(unsigned long long)a0;
- (void)addDoubleListValue:(double)a0;
- (unsigned long long)dateListValuesCount;
- (void)clearDateListValues;
- (id)dateListValueAtIndex:(unsigned long long)a0;
- (unsigned long long)stringListValuesCount;
- (void)clearStringListValues;
- (id)stringListValueAtIndex:(unsigned long long)a0;
- (unsigned long long)locationListValuesCount;
- (void)clearLocationListValues;
- (id)locationListValueAtIndex:(unsigned long long)a0;
- (void)setSignedListValues:(long long *)a0 count:(unsigned long long)a1;
- (void)setDoubleListValues:(double *)a0 count:(unsigned long long)a1;

@end
