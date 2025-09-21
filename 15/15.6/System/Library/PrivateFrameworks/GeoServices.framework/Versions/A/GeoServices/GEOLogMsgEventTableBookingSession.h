@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventTableBookingSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    long long _blurredBookingTimestamp;
    long long _blurredReservationTimestamp;
    NSString *_bookTableAppId;
    NSString *_bookTableSessionId;
    double _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSString *_installNeededTappedAppId;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _endState;
    int _endView;
    unsigned int _tableSize;
    char _addedSpecialRequest;
    char _installCompleted;
    char _installNeeded;
    char _swipedAvailableTimes;
    char _tappedDatePicker;
    struct { unsigned char has_blurredBookingTimestamp : 1; unsigned char has_blurredReservationTimestamp : 1; unsigned char has_durationOfSessionInSeconds : 1; unsigned char has_muid : 1; unsigned char has_endState : 1; unsigned char has_endView : 1; unsigned char has_tableSize : 1; unsigned char has_addedSpecialRequest : 1; unsigned char has_installCompleted : 1; unsigned char has_installNeeded : 1; unsigned char has_swipedAvailableTimes : 1; unsigned char has_tappedDatePicker : 1; unsigned char read_bookTableAppId : 1; unsigned char read_bookTableSessionId : 1; unsigned char read_errorMessages : 1; unsigned char read_installNeededTappedAppId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasBookTableSessionId;
@property (retain, nonatomic) NSString *bookTableSessionId;
@property (nonatomic) char hasEndState;
@property (nonatomic) int endState;
@property (nonatomic) char hasEndView;
@property (nonatomic) int endView;
@property (readonly, nonatomic) char hasBookTableAppId;
@property (retain, nonatomic) NSString *bookTableAppId;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasBlurredReservationTimestamp;
@property (nonatomic) long long blurredReservationTimestamp;
@property (nonatomic) char hasBlurredBookingTimestamp;
@property (nonatomic) long long blurredBookingTimestamp;
@property (nonatomic) char hasDurationOfSessionInSeconds;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) char hasInstallNeeded;
@property (nonatomic) char installNeeded;
@property (readonly, nonatomic) char hasInstallNeededTappedAppId;
@property (retain, nonatomic) NSString *installNeededTappedAppId;
@property (nonatomic) char hasInstallCompleted;
@property (nonatomic) char installCompleted;
@property (nonatomic) char hasTableSize;
@property (nonatomic) unsigned int tableSize;
@property (nonatomic) char hasAddedSpecialRequest;
@property (nonatomic) char addedSpecialRequest;
@property (nonatomic) char hasSwipedAvailableTimes;
@property (nonatomic) char swipedAvailableTimes;
@property (nonatomic) char hasTappedDatePicker;
@property (nonatomic) char tappedDatePicker;
@property (retain, nonatomic) NSMutableArray *errorMessages;

+ (Class)errorMessageType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addErrorMessage:(id)a0;
- (int)StringAsEndView:(id)a0;
- (int)StringAsEndState:(id)a0;
- (void)clearErrorMessages;
- (id)endStateAsString:(int)a0;
- (id)endViewAsString:(int)a0;
- (id)errorMessageAtIndex:(unsigned long long)a0;
- (unsigned long long)errorMessagesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
