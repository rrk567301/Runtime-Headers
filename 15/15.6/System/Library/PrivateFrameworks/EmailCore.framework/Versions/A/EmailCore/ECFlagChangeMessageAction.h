@class NSSet, NSArray, ECMessageFlagChange, NSURL, NSString, ECLocalMessageActionID;

@interface ECFlagChangeMessageAction : ECLocalMessageAction <ECFlagChangeMessageActionBuilder>

@property (copy, nonatomic) NSSet *remoteIDs;
@property (copy, nonatomic) NSArray *messages;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;
@property (retain, nonatomic) ECLocalMessageActionID *persistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) char userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;

@end
