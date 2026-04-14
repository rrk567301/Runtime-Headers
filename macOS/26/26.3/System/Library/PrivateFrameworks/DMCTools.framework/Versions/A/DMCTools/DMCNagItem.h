@class NSString, NSDictionary, NSDate, NSNumber;

@interface DMCNagItem : NSObject {
    void /* function */ identifier;
    void /* function */ clientID;
    void /* function */ deadlineURLString;
    void /* function */ schedule;
    void /* function */ title;
    void /* function */ message;
    void /* function */ notificationTitle;
    void /* function */ notificationMessage;
    void /* function */ actionTitle;
    void /* function */ actionURLString;
    void /* function */ dismissTitle;
    void /* function */ dismissURLString;
    void /* function */ lastNagString;
}

@property (class, nonatomic, readonly) NSString *migrationNagItemID;
@property (class, nonatomic, readonly) NSString *migrationNagClientID;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSString *deadlineURLString;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, copy) NSDictionary *schedule;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *notificationTitle;
@property (nonatomic, readonly) NSString *notificationMessage;
@property (nonatomic, readonly) NSString *actionTitle;
@property (nonatomic, readonly) NSString *actionURLString;
@property (nonatomic, readonly) NSString *dismissTitle;
@property (nonatomic, readonly) NSString *dismissURLString;
@property (nonatomic, copy) NSString *lastNagString;
@property (nonatomic, readonly) NSDate *deadline;
@property (nonatomic, readonly) NSNumber *shortestInterval;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) BOOL isMigrationNag;

+ (id)migrationNagItemWithDeadline:(id)a0 actionURL:(id)a1 deadlineURL:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)setDeadline:(id)a0;
- (id)nextNag;
- (void)didNag;
- (id)followUpAndReturnError:(id *)a0;
- (id)iOSFilesystemURL;
- (id)initWithStyle:(unsigned long long)a0 identifier:(id)a1 clientID:(id)a2 schedule:(id)a3 title:(id)a4 message:(id)a5 notificationTitle:(id)a6 notificationMessage:(id)a7 actionTitle:(id)a8 actionURL:(id)a9 dismissTitle:(id)a10 dismissURL:(id)a11 deadlineURL:(id)a12;
- (id)localized:(id)a0;
- (id)localizedFormat:(id)a0 :(id)a1;
- (id)localizedOptional:(id)a0;

@end
