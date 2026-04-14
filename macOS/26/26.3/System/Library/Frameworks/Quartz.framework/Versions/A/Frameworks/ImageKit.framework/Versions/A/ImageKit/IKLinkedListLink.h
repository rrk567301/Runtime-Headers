@class NSString;

@interface IKLinkedListLink : NSObject <IKLinkedListLinkProtocol> {
    IKLinkedListLink *_next;
    IKLinkedListLink *_previous;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNext:(id)a0;
- (id)next;
- (void)setPrevious:(id)a0;
- (void)dealloc;
- (id)previous;

@end
