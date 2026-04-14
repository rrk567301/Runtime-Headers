@class NSString;

@interface IKLinkedListLink : NSObject <IKLinkedListLinkProtocol> {
    IKLinkedListLink *_next;
    IKLinkedListLink *_previous;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPrevious:(id)a0;
- (id)next;
- (id)previous;
- (void)setNext:(id)a0;
- (void)dealloc;

@end
