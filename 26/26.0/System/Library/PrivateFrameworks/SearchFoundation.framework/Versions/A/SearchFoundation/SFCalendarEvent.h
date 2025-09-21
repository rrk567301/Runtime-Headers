@class NSTimeZone, NSString, NSDictionary, NSURL, SFStructuredLocation, NSDate, NSData;

@interface SFCalendarEvent : NSObject <SFCalendarEvent, NSSecureCoding, NSCopying> {
    struct { unsigned char isAllDay : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isAllDay;
@property (retain, nonatomic) SFStructuredLocation *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSTimeZone *startTimeZone;
@property (copy, nonatomic) NSTimeZone *endTimeZone;
@property (retain, nonatomic) SFStructuredLocation *endLocation;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasIsAllDay;

@end
