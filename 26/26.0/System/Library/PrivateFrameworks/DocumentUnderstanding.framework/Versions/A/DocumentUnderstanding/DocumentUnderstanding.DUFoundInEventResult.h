@class NSError, NSString, NSDictionary;

@interface DocumentUnderstanding.DUFoundInEventResult : NSObject <NSCoding, NSCopying> {
    void /* function */ reservationId;
    void /* function */ reservationName;
    void /* function */ hotelName;
    void /* function */ guestName;
    void /* function */ movieName;
    void /* function */ startAddress;
    void /* function */ startAddressComponents;
    void /* function */ endAddress;
    void /* function */ endAddressComponents;
    void /* function */ startPlace;
    void /* function */ endPlace;
    void /* function */ startDate;
    void /* function */ endDate;
    void /* function */ text;
    void /* unknown type, empty encoding */ tags;
}

@property (nonatomic) BOOL detectedEventPolarity;
@property (nonatomic, retain) NSError *reservationIdError;
@property (nonatomic, copy) NSString *reservationId;
@property (nonatomic, retain) NSError *reservationNameError;
@property (nonatomic, copy) NSString *reservationName;
@property (nonatomic, retain) NSError *hotelNameError;
@property (nonatomic, copy) NSString *hotelName;
@property (nonatomic, retain) NSError *guestNameError;
@property (nonatomic, copy) NSString *guestName;
@property (nonatomic, retain) NSError *movieNameError;
@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, retain) NSError *startAddressError;
@property (nonatomic, copy) NSString *startAddress;
@property (nonatomic, copy) NSDictionary *startAddressComponents;
@property (nonatomic, retain) NSError *endAddressError;
@property (nonatomic, copy) NSString *endAddress;
@property (nonatomic, copy) NSDictionary *endAddressComponents;
@property (nonatomic, retain) NSError *startPlaceError;
@property (nonatomic, copy) NSString *startPlace;
@property (nonatomic, retain) NSError *endPlaceError;
@property (nonatomic, copy) NSString *endPlace;
@property (nonatomic, retain) NSError *startDateError;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, retain) NSError *endDateError;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *text;

+ (id)getErrorForFieldWithField:(id)a0 errorCode:(long long)a1;
+ (id)mapErrorCodeToUserInfoWithFieldName:(id)a0 errorCode:(long long)a1;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)serializedData;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFoundInEventResult:(id)a0;

@end
