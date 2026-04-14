@class NSString, NSDictionary, FLFollowUpController;

@interface DMCFollowUp : NSObject {
    void /* function */ identifier;
    void /* function */ clientID;
    void /* function */ userInfo;
    void /* function */ title;
    void /* function */ message;
    void /* function */ notificationTitle;
    void /* function */ notificationMessage;
    void /* function */ actionTitle;
    void /* function */ actionURLString;
    void /* function */ dismissTitle;
    void /* function */ dismissURLString;
}

@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) FLFollowUpController *controller;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *notificationTitle;
@property (nonatomic, readonly) NSString *notificationMessage;
@property (nonatomic, readonly) NSString *actionTitle;
@property (nonatomic, readonly) NSString *actionURLString;
@property (nonatomic, readonly) NSString *dismissTitle;
@property (nonatomic, readonly) NSString *dismissURLString;
@property (nonatomic) BOOL force;

+ (BOOL)clearWithID:(id)a0 clientID:(id)a1 error:(id *)a2;
+ (BOOL)clearWithClientID:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)clearAndReturnError:(id *)a0;
- (id)initWithStyle:(unsigned long long)a0 identifier:(id)a1 clientID:(id)a2 userInfo:(id)a3 title:(id)a4 message:(id)a5 notificationTitle:(id)a6 notificationMessage:(id)a7 actionTitle:(id)a8 actionURL:(id)a9 dismissTitle:(id)a10 dismissURL:(id)a11;
- (BOOL)presentAndReturnError:(id *)a0;

@end
