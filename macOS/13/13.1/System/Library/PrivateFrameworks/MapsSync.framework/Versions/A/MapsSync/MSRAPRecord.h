@class NSData, NSString, NSDate;

@interface MSRAPRecord : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _contentData;
    void /* unknown type, empty encoding */ _countryCode;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _reportId;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _statusLastUpdatedDate;
    void /* unknown type, empty encoding */ _summary;
    void /* unknown type, empty encoding */ _type;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;

- (void).cxx_destruct;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 contentData:(id)a1 countryCode:(id)a2 positionIndex:(long long)a3 reportId:(id)a4 status:(short)a5 statusLastUpdatedDate:(id)a6 summary:(id)a7 type:(short)a8;

@end
