@class SUSharedPrefs, NSString, NSDate, SUOSUDDMConfiguration;

@interface SUOSUDDMErrorReporter : NSObject

@property (nonatomic) long long lastDDMErrorCode;
@property (retain, nonatomic) NSDate *lastDDMErrorTime;
@property (retain, nonatomic) NSString *lastDDMDeclaration;
@property (retain) SUSharedPrefs *sharedPrefs;
@property (retain) SUOSUDDMConfiguration *ddmConfiguration;

+ (id)stringForErrorCode:(long long)a0;

- (void).cxx_destruct;
- (id)_createDDMErrorWithErrorDescription:(id)a0 timestamp:(id)a1 incrementErrorCount:(BOOL)a2;
- (BOOL)_shouldIncrementForError:(long long)a0 timestamp:(id)a1 declaration:(id)a2;
- (id)initWithSharedPrefs:(id)a0 ddmConfiguration:(id)a1;
- (void)setDDMPersistedErrorWithErrorCode:(long long)a0 causedByError:(id)a1;
- (void)setDDMPersistedErrorWithErrorCode:(long long)a0 timestamp:(id)a1 causedByError:(id)a2;

@end
