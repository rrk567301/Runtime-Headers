@class NSString, WFIcon;

@interface _TtC11WorkflowKitP33_92494141B4D875F190D9BB85FDDC289C12ActionOutput : _TtCs12_SwiftObject <WFActionOutput> {
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) WFIcon *icon;
@property (nonatomic, readonly) unsigned long long outputType;
@property (nonatomic, readonly) NSString *variableName;

- (id)variableWithProvider:(id)a0;

@end
