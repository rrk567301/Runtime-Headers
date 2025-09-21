@interface DOMProgressEvent : DOMEvent

@property (readonly) char lengthComputable;
@property (readonly) unsigned long long loaded;
@property (readonly) unsigned long long total;

@end
