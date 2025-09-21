@class NSString;

@interface CALNUNIconProvider : NSObject <CALNCalendarIconIdentifierProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)_calIconDateFormatTypeFromUNType:(long long)a0;
+ (id)_identifierEncodingAllowedCharacters;
+ (BOOL)_parseIconIdentifier:(id)a0 intoDateComponents:(id *)a1 calendar:(id *)a2 type:(long long *)a3;
+ (long long)_unDateFormatTypeFromCalIconDateFormatType:(long long)a0;

- (id)_iconIdentifierForCachedIconPath:(id)a0;
- (id)_identifierForIconWithDateComponents:(id)a0 type:(long long)a1 inCalendar:(id)a2;
- (id)iconIdentifierForIcon:(id)a0;
- (id)iconWithIdentifier:(id)a0;
- (id)identifierForIconWithDate:(id)a0 inCalendar:(id)a1;

@end
