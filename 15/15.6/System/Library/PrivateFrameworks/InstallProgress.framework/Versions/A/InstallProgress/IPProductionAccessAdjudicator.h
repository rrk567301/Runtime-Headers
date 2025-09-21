@class NSString;

@interface IPProductionAccessAdjudicator : NSObject <IPAccessAdjudicator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)progressServer:(id)a0 shouldAcceptConnection:(id)a1;

@end
