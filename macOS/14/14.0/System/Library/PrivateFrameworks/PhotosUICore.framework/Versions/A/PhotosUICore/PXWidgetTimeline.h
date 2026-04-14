@interface PXWidgetTimeline : NSObject

+ (BOOL)requestForYouWidgetTimelineReloadWithError:(id *)a0;
+ (id)timelineFromLibrary:(id)a0 albumIdentifier:(id)a1 widgetIdentifier:(id)a2 widgetSize:(struct CGSize { double x0; double x1; })a3;
+ (id)timelineFromLibrary:(id)a0 forWidgetSize:(struct CGSize { double x0; double x1; })a1 timelineSize:(unsigned long long)a2;

@end
