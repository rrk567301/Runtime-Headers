@interface CRBootIntentHelper : NSObject <CoreRepairBootIntentProtocol>

- (void)clearBootIntent:(id /* block */)a0;
- (void)clearBootIntentAndReboot:(id /* block */)a0;
- (void)clearRepairBackup:(id /* block */)a0;
- (void)getRepairTicket:(id /* block */)a0;
- (void)setBootIntentAndRebootToCheckerboardWithLocale:(id)a0 reply:(id /* block */)a1;

@end
